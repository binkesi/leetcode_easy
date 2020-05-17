import requests

resp = requests.head('http://www.baidu.com')

status = resp.status_code
last_modified = resp.headers['last-modified']
content_type = resp.headers['content-type']
#content_length = resp.headers['content-length']


if __name__ == "__main__":
    print(resp)
    print(status, last_modified, content_type, sep=', ')