/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SHRecognitionSessionDelegate <SHSessionDelegate>
@optional
-(void)session:(id)arg1 didNotFindMatchForSignature:(id)arg2;
-(void)session:(id)arg1 didNotFindMatchforSignature:(id)arg2 needsMinimumSignatureLength:(double)arg3;

@required
-(void)session:(id)arg1 didFailForSignature:(id)arg2 withError:(id)arg3;

@end

