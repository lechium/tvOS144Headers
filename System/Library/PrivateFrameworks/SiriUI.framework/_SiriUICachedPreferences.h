/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults;

@interface _SiriUICachedPreferences : NSObject {

	NSUserDefaults* _textInputDefaults;
	BOOL _textInputEnabled;
	BOOL _HTTForTextInputEnabled;
	BOOL _siriMiniIsEnabled;
	BOOL _streamingDictationIsEnabled;
	BOOL _siriSafeForLockScreen;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_updatePreferences;
-(BOOL)isTextInputEnabled;
-(BOOL)isHTTForTextInputEnabled;
-(BOOL)isSiriMiniEnabled;
-(BOOL)isStreamingDictationEnabled;
-(BOOL)isSiriSafeForLockScreen;
-(void)_setSiriSafeForLockScreen:(BOOL)arg1 ;
@end

