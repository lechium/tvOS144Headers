//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LogFileWriter;

@interface iAP2Logging : NSObject
{
    unsigned char _printIapPacketsPref;	// 8 = 0x8
    unsigned char _logIapDebug;	// 9 = 0x9
    unsigned char _printIapDebug;	// 10 = 0xa
    LogFileWriter *_iapLogWriter;	// 16 = 0x10
}

+ (id)GetSharedInstance;	// IMP=0x0000000100079d74
- (void)LogCommentInternalForPort:(id)arg1 format:(id)arg2;	// IMP=0x000000010007a694
- (void)LogCommentForPort:(id)arg1 format:(id)arg2;	// IMP=0x000000010007a524
- (void)LogEventInternalForPort:(id)arg1 event:(id)arg2 format:(id)arg3;	// IMP=0x000000010007a3c0
- (void)LogEventForPort:(id)arg1 event:(id)arg2 format:(id)arg3;	// IMP=0x000000010007a24c
- (void)LogPacketForPort:(id)arg1 packet:(struct iAP2Packet_st *)arg2 dir:(int)arg3;	// IMP=0x0000000100079f6c
- (void)loadLoggingPreferences;	// IMP=0x0000000100079ef4
- (void)dealloc;	// IMP=0x0000000100079eac
- (id)init;	// IMP=0x0000000100079dd8

@end

