from urllib import request, parse
import json

# Base URL being accessed
url = 'http://httpbin.org/get'

# Dictionary of query parameters (if any)
parms = {
   'name1' : 'value1',
   'name2' : 'value2'
}

# Encode the query string
querystring = parse.urlencode(parms)


if __name__ == "__main__":
    # Make a GET request and read the response
    u = request.urlopen(url+'?' + querystring)
    resp = u.read()
    print(resp)
    
    url = 'http://httpbin.org/post'
    u = request.urlopen(url, querystring.encode('ascii'))
    resp = u.read()
    print(resp)