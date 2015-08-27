Role Name
=========

This is an Ansible role to install AS-Stats (https://github.com/manuelkasper/AS-Stats) tool in Debian 7.

Requirements
------------

Basic Ansible requirements.

Considerations
--------------

This is a role to automate AS-Stats installation, even though, you must read the information that is in https://github.com/manuelkasper/AS-Stats to create your own files/knownlinks.

Role Variables
--------------

At vars/main.yml you need to change the variables to your needs:

domain: example.com
user: user
password: superhighsecurepassword
htaccess_path: /etc/apache2/passwordfile
net_allowed: 192.168.1.0/24

Example Playbook
----------------

    - hosts: server1
      roles:
         - { role: as-stats }

License
-------

BSD

Author Information
------------------

This role was created in 2015 by Victor González.