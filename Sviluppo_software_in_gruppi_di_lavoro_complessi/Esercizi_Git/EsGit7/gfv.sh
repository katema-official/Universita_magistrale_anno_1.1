#!/bin/bash

if [ ! -f template.html ]; then
   
cat > template.html <<'EOF'
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/2.1.4/jquery.min.js" ></script> 
  <script src="https://cdnjs.cloudflare.com/ajax/libs/d3/3.5.6/d3.min.js" ></script>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/moment.js/2.10.3/moment.min.js" ></script>
  <script src="https://rawgit.com/Teun/git-flow-vis/master/Vis/Web/Scripts/gitflow-visualize.js"></script>
  <script>
    $(function() {
      var element = document.getElementById('drawhere');
      var dataCallback = function(done) {
        window.setTimeout(function() {
          done({
            branches: {
              values: [ // __REFS__
              ]
            },
            tags: {
              values: [ // __TAGS__
              ]
            },
            commits: [{
              values: [ // __COMMITS__
              ]
            }]
          });
        }, 100);
      };
      var moreDataCallback = function(from, done) {
        done(from, null);
      }
      var options = {
        dataCallback: dataCallback,
        moreDataCallback: moreDataCallback
      };
      GitFlowVisualize.draw(element, options);
    });
  </script>
  <style type="text/css">
    .aui-avatar-xsmall .aui-avatar-inner img {
      max-height: 16px;
      max-width: 16px;
      border-radius: 100%;
      border: 1px solid #eee;
    }
    .aui-lozenge {
      background: #cccccc;
      border: 2px solid #cccccc;
      border-radius: 3px;
      color: #333333;
      display: inline-block;
      font-size: 11px;
      font-weight: bold;
      line-height: 95%;
      margin: 0;
      padding: 2px 5px;
      text-align: center;
      text-decoration: none;
      text-transform: uppercase;
    }
    .aui-lozenge-subtle {
      background-color: #eeeeee;
    }
    .aui-lozenge-complete {/*FEATURE*/
      border-color: #2f68b7;
      color: #2f68b7;
    }
    .aui-lozenge-error {/*MASTER*/
      border-color: #AF2A26;
      color: #AF2A26;
    }
    .aui-lozenge-moved {/*TAG*/
      border-color: #F2B833;
      color: #AF2A26;
    }
    .aui-lozenge-current {/*RELEASE*/
      border-color: #F2B833;
      color: #F2B833;
    }
    .aui-lozenge-success {/*DEVELOP*/
      border-color: #709317;
      color: #709317;
    }
  </style>
  <title>_TITOLO_</title>
</head>
<body>
  <style type="text/css">
    .commits-graph-container {
      width: 20%;
    }
    .commit-msg {
      padding-left: 20%;
      width: 80%;
    }
    table.commit-table td.msg {
      overflow: auto;
    }
  </style>
  <div id="drawhere"></div>
</body>
</html>
EOF

fi
#local branches
git for-each-ref --format='{ "id": "%(refname)", "displayId": "%(objectname:short)", "latestChangeset": "%(objectname)"},' | grep -v "tags" | grep -v "remote" > __refs

#tags
git for-each-ref --format='{ "id": "%(refname)", "displayId": "%(object)", "latestChangeset": "%(object)"},' | grep "tags"  > __tags

#commitLines
git rev-list --branches --pretty=tformat:'{ "id": "%H", "displayId": "%h", "author": { "emailAddress": "%ae","displayName": "%an"}, "authorTimestamp": %at000, "message": "%s", "parents":' | grep -v "^commit " > __commits
git rev-list --branches --pretty=tformat:'[{"id":"%P"}]},' | grep -v "^commit " | sed -e 's/ /"}, {"id":"/g'  > __commitparents
paste -d " " __commits __commitparents > __commitLines 

#fill the template
sed "/__REFS__/ r __refs" template.html |  sed "/__TAGS__/ r __tags" |  sed "/__COMMITS__/ r __commitLines"  > gfv.html
rm __*
open gfv.html 
