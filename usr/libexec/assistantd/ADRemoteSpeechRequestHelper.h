//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFSpeechRequestOptions, NSUUID;

@interface ADRemoteSpeechRequestHelper : NSObject
{
    NSUUID *_currentToken;	// 8 = 0x8
    AFSpeechRequestOptions *_speechRequestOptions;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010010cb9c
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) AFSpeechRequestOptions *speechRequestOptions; // @synthesize speechRequestOptions=_speechRequestOptions;
@property(readonly, copy, nonatomic) NSUUID *currentToken; // @synthesize currentToken=_currentToken;
- (void)reset;	// IMP=0x000000010010cb3c
- (id)setSpeechRequestOptions:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010010ca78

@end

