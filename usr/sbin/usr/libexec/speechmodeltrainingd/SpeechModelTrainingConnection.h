//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SpeechModelTrainingProtocol-Protocol.h"

@class NSXPCConnection, SMTAttachmentsDownload, SMTGlobalNNLM;

@interface SpeechModelTrainingConnection : NSObject <SpeechModelTrainingProtocol>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    SMTGlobalNNLM *_smtGlobalNNLM;	// 16 = 0x10
    SMTAttachmentsDownload *_downloadSession;	// 24 = 0x18
    _Bool _shouldStop;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x000000010000869c
- (void).cxx_destruct;	// IMP=0x0000000100008c18
@property _Bool shouldStop; // @synthesize shouldStop=_shouldStop;
- (void)trainGlobalNNLMwithFidesSessionURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008be0
- (id)createDispatchTimerWithInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008b24
- (void)trainGlobalNNLMwithFidesRecipe:(id)arg1 attachments:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100008af4
- (void)trainPersonalizedLMWithLanguage:(id)arg1 configuration:(id)arg2 fides:(_Bool)arg3 write:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100008a30
- (void)upperCaseString:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000089b0
- (void)dealloc;	// IMP=0x0000000100008960
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0000000100008738
- (id)init;	// IMP=0x0000000100008720

@end

