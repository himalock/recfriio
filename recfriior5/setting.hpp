// $Id$
// 設定用

#ifndef _SETTING_HPP_
#define _SETTING_HPP_

// エラー最大表示数
const uint32_t URB_ERROR_MAX = 20;

// 受信サイズ(usbfsのバルク転送限界サイズ)
const uint32_t TSDATASIZE = 16384;

// FIFOバッファ設定
const unsigned long ASYNCBUFFTIME = 20UL; // バッファ長 = 20秒
const unsigned long WHITE_ASYNCBUFFSIZE = 0x200000UL * ASYNCBUFFTIME / TSDATASIZE; // 平均16Mbpsとする
const unsigned long BLACK_ASYNCBUFFSIZE = 0x400000UL * ASYNCBUFFTIME / TSDATASIZE; // 平均32Mbpsとする

// 
const unsigned int WHITE_REQUEST_RESERVE_NUM  = 16; // 非同期リクエスト予約数
const unsigned int WHITE_REQUEST_POLLING_WAIT = 10; // 非同期リクエストポーリング間隔(ms)
const unsigned int BLACK_REQUEST_RESERVE_NUM  = 24; // 非同期リクエスト予約数
const unsigned int BLACK_REQUEST_POLLING_WAIT = 7; // 非同期リクエストポーリング間隔(ms)

const unsigned int REQUEST_TIMEOUT    = 1000; // USBリクエストタイムアウト(ms)
const unsigned int REQUEST_TIMEOUT_TS = 2000; // TS読み込み用USBタイムアウト時間(ms)

const uint16_t TARGET_ID_VENDOR  = 0x7a69; // FriioのidVendor
const uint16_t TARGET_ID_PRODUCT = 0x0001; // FriioのidProduct

const uint32_t ERROR_RETRY_MAX      = 3;    // 初期化時にエラーが起こった場合のリトライ回数
const uint32_t ERROR_RETRY_INTERVAL = 1000; // ↑の間隔(ms)

const char  DETECT_LOCKFILE_DEFAULT[] = "/var/lock/friiodetect"; // Friio認識時ロックファイル
const uint32_t DETECT_ERROR_RETRY_MAX      = 3;    // Friio認識時にエラーが起こった場合のリトライ回数
const uint32_t DETECT_ERROR_RETRY_INTERVAL = 300; // ↑の間隔(ms)

const uint32_t SETCHANNEL_COMMAND_INTERBAL = 5; // SetChannel時Timeout error回避用遅延時間(ms) (黒凡用)

const int TARGET_INTERFACE  = 0;
const int TARGET_ALTSETTING = 0;
const int TARGET_ENDPOINT   = 0x81;

//
const float SIGNALLEVEL_RETRY_THRESHOLD = 10.0; // 開始時の信号レベル取得で信号レベルがこれ以下であれば再度信号レベルを取得する。
const int   SIGNALLEVEL_RETRY_MAX       = 2;    // 信号レベル再取得の最大回数
const int   SIGNALLEVEL_RETRY_INTERVAL  = 400;  // 信号レベル再取得間隔(ms)

const char BASE_DIR_UDEV[]  = "/dev/bus/usb";  // udevで作成されるUSBのディレクトリ
const char BASE_DIR_USBFS[] = "/proc/bus/usb"; // usbfsのディレクトリ

#endif /* !defined(_SETTING_HPP_) */
