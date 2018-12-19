SRC_URI = "https://github.com/orocos/${SPN}/archive/v${PV}.tar.gz;downloadfilename=${SPN}-${PV}.tar.gz"
SRC_URI[md5sum] = "b1f3ccb1b8fb8023d1cc8d8749a0732d"
SRC_URI[sha256sum] = "aff361d2b4e2c6d30ae959308a124022eeef5dc5bea2ce779900f9b36b0537bd"

S = "${WORKDIR}/${SPN}-${PV}/${@d.getVar('BPN', True).replace('-', '_')}"

inherit cmake

SPN = "orocos_kinematics_dynamics"
