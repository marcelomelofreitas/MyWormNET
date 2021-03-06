const
  MimeTypes : array[1..137] of record
    Extension, MimeType: string;
    end = (
  (Extension: 'atom'; MimeType: 'application/atom+xml'),
  (Extension: 'mathml'; MimeType: 'application/mathml+xml'),
  (Extension: 'doc'; MimeType: 'application/msword'),
  (Extension: 'bin'; MimeType: 'application/octet-stream'),
  (Extension: 'dms'; MimeType: 'application/octet-stream'),
  (Extension: 'lha'; MimeType: 'application/octet-stream'),
  (Extension: 'lzh'; MimeType: 'application/octet-stream'),
  (Extension: 'exe'; MimeType: 'application/octet-stream'),
  (Extension: 'class'; MimeType: 'application/octet-stream'),
  (Extension: 'so'; MimeType: 'application/octet-stream'),
  (Extension: 'dll'; MimeType: 'application/octet-stream'),
  (Extension: 'dmg'; MimeType: 'application/octet-stream'),
  (Extension: 'oda'; MimeType: 'application/oda'),
  (Extension: 'ogg'; MimeType: 'application/ogg'),
  (Extension: 'pdf'; MimeType: 'application/pdf'),
  (Extension: 'ai'; MimeType: 'application/postscript'),
  (Extension: 'eps'; MimeType: 'application/postscript'),
  (Extension: 'ps'; MimeType: 'application/postscript'),
  (Extension: 'rdf'; MimeType: 'application/rdf+xml'),
  (Extension: 'smi'; MimeType: 'application/smil'),
  (Extension: 'smil'; MimeType: 'application/smil'),
  (Extension: 'gram'; MimeType: 'application/srgs'),
  (Extension: 'grxml'; MimeType: 'application/srgs+xml'),
  (Extension: 'mif'; MimeType: 'application/vnd.mif'),
  (Extension: 'bcpio'; MimeType: 'application/x-bcpio'),
  (Extension: 'vcd'; MimeType: 'application/x-cdlink'),
  (Extension: 'pgn'; MimeType: 'application/x-chess-pgn'),
  (Extension: 'cpio'; MimeType: 'application/x-cpio'),
  (Extension: 'csh'; MimeType: 'application/x-csh'),
  (Extension: 'dcr'; MimeType: 'application/x-director'),
  (Extension: 'dir'; MimeType: 'application/x-director'),
  (Extension: 'dxr'; MimeType: 'application/x-director'),
  (Extension: 'dvi'; MimeType: 'application/x-dvi'),
  (Extension: 'gtar'; MimeType: 'application/x-gtar'),
  (Extension: 'hdf'; MimeType: 'application/x-hdf'),
  (Extension: 'skp'; MimeType: 'application/x-koan'),
  (Extension: 'skd'; MimeType: 'application/x-koan'),
  (Extension: 'skt'; MimeType: 'application/x-koan'),
  (Extension: 'skm'; MimeType: 'application/x-koan'),
  (Extension: 'latex'; MimeType: 'application/x-latex'),
  (Extension: 'nc'; MimeType: 'application/x-netcdf'),
  (Extension: 'cdf'; MimeType: 'application/x-netcdf'),
  (Extension: 'sh'; MimeType: 'application/x-sh'),
  (Extension: 'shar'; MimeType: 'application/x-shar'),
  (Extension: 'sit'; MimeType: 'application/x-stuffit'),
  (Extension: 'sv4cpio'; MimeType: 'application/x-sv4cpio'),
  (Extension: 'sv4crc'; MimeType: 'application/x-sv4crc'),
  (Extension: 'tar'; MimeType: 'application/x-tar'),
  (Extension: 'tcl'; MimeType: 'application/x-tcl'),
  (Extension: 'tex'; MimeType: 'application/x-tex'),
  (Extension: 'texinfo'; MimeType: 'application/x-texinfo'),
  (Extension: 'texi'; MimeType: 'application/x-texinfo'),
  (Extension: 't'; MimeType: 'application/x-troff'),
  (Extension: 'tr'; MimeType: 'application/x-troff'),
  (Extension: 'roff'; MimeType: 'application/x-troff'),
  (Extension: 'man'; MimeType: 'application/x-troff-man'),
  (Extension: 'me'; MimeType: 'application/x-troff-me'),
  (Extension: 'ms'; MimeType: 'application/x-troff-ms'),
  (Extension: 'ustar'; MimeType: 'application/x-ustar'),
  (Extension: 'xhtml'; MimeType: 'application/xhtml+xml'),
  (Extension: 'xht'; MimeType: 'application/xhtml+xml'),
  (Extension: 'xslt'; MimeType: 'application/xslt+xml'),
  (Extension: 'xml'; MimeType: 'application/xml'),
  (Extension: 'xsl'; MimeType: 'application/xml'),
  (Extension: 'dtd'; MimeType: 'application/xml-dtd'),
  (Extension: 'zip'; MimeType: 'application/zip'),
  (Extension: 'au'; MimeType: 'audio/basic'),
  (Extension: 'snd'; MimeType: 'audio/basic'),
  (Extension: 'mid'; MimeType: 'audio/midi'),
  (Extension: 'midi'; MimeType: 'audio/midi'),
  (Extension: 'kar'; MimeType: 'audio/midi'),
  (Extension: 'mpga'; MimeType: 'audio/mpeg'),
  (Extension: 'mp2'; MimeType: 'audio/mpeg'),
  (Extension: 'mp3'; MimeType: 'audio/mpeg'),
  (Extension: 'aif'; MimeType: 'audio/x-aiff'),
  (Extension: 'aiff'; MimeType: 'audio/x-aiff'),
  (Extension: 'aifc'; MimeType: 'audio/x-aiff'),
  (Extension: 'm3u'; MimeType: 'audio/x-mpegurl'),
  (Extension: 'ram'; MimeType: 'audio/x-pn-realaudio'),
  (Extension: 'ra'; MimeType: 'audio/x-pn-realaudio'),
  (Extension: 'wav'; MimeType: 'audio/x-wav'),
  (Extension: 'pdb'; MimeType: 'chemical/x-pdb'),
  (Extension: 'xyz'; MimeType: 'chemical/x-xyz'),
  (Extension: 'bmp'; MimeType: 'image/bmp'),
  (Extension: 'cgm'; MimeType: 'image/cgm'),
  (Extension: 'gif'; MimeType: 'image/gif'),
  (Extension: 'ief'; MimeType: 'image/ief'),
  (Extension: 'jpeg'; MimeType: 'image/jpeg'),
  (Extension: 'jpg'; MimeType: 'image/jpeg'),
  (Extension: 'jpe'; MimeType: 'image/jpeg'),
  (Extension: 'png'; MimeType: 'image/png'),
  (Extension: 'svg'; MimeType: 'image/svg+xml'),
  (Extension: 'tiff'; MimeType: 'image/tiff'),
  (Extension: 'tif'; MimeType: 'image/tiff'),
  (Extension: 'djvu'; MimeType: 'image/vnd.djvu'),
  (Extension: 'djv'; MimeType: 'image/vnd.djvu'),
  (Extension: 'wbmp'; MimeType: 'image/vnd.wap.wbmp'),
  (Extension: 'ras'; MimeType: 'image/x-cmu-raster'),
  (Extension: 'ico'; MimeType: 'image/x-icon'),
  (Extension: 'pnm'; MimeType: 'image/x-portable-anymap'),
  (Extension: 'pbm'; MimeType: 'image/x-portable-bitmap'),
  (Extension: 'ppm'; MimeType: 'image/x-portable-pixmap'),
  (Extension: 'rgb'; MimeType: 'image/x-rgb'),
  (Extension: 'xbm'; MimeType: 'image/x-xbitmap'),
  (Extension: 'xpm'; MimeType: 'image/x-xpixmap'),
  (Extension: 'xwd'; MimeType: 'image/x-xwindowdump'),
  (Extension: 'igs'; MimeType: 'model/iges'),
  (Extension: 'iges'; MimeType: 'model/iges'),
  (Extension: 'msh'; MimeType: 'model/mesh'),
  (Extension: 'mesh'; MimeType: 'model/mesh'),
  (Extension: 'silo'; MimeType: 'model/mesh'),
  (Extension: 'wrl'; MimeType: 'model/vrml'),
  (Extension: 'vrml'; MimeType: 'model/vrml'),
  (Extension: 'ics'; MimeType: 'text/calendar'),
  (Extension: 'ifb'; MimeType: 'text/calendar'),
  (Extension: 'css'; MimeType: 'text/css'),
  (Extension: 'html'; MimeType: 'text/html'),
  (Extension: 'htm'; MimeType: 'text/html'),
  (Extension: 'asc'; MimeType: 'text/plain'),
  (Extension: 'txt'; MimeType: 'text/plain'),
  (Extension: 'rtx'; MimeType: 'text/richtext'),
  (Extension: 'rtf'; MimeType: 'text/rtf'),
  (Extension: 'sgml'; MimeType: 'text/sgml'),
  (Extension: 'sgm'; MimeType: 'text/sgml'),
  (Extension: 'wml'; MimeType: 'text/vnd.wap.wml'),
  (Extension: 'wmls'; MimeType: 'text/vnd.wap.wmlscript'),
  (Extension: 'etx'; MimeType: 'text/x-setext'),
  (Extension: 'mpeg'; MimeType: 'video/mpeg'),
  (Extension: 'mpg'; MimeType: 'video/mpeg'),
  (Extension: 'mpe'; MimeType: 'video/mpeg'),
  (Extension: 'qt'; MimeType: 'video/quicktime'),
  (Extension: 'mov'; MimeType: 'video/quicktime'),
  (Extension: 'mxu'; MimeType: 'video/vnd.mpegurl'),
  (Extension: 'm4u'; MimeType: 'video/vnd.mpegurl'),
  (Extension: 'avi'; MimeType: 'video/x-msvideo'),
  (Extension: 'movie'; MimeType: 'video/x-sgi-movie'),
  (Extension: 'ice'; MimeType: 'x-conference/x-cooltalk'));
