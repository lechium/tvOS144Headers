/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FBSDisplayLayoutMonitor;

@interface VCCKApplicationStateObserver : NSObject {

	BOOL _applicationVisible;
	FBSDisplayLayoutMonitor* _layoutMonitor;

}

@property (nonatomic,readonly) FBSDisplayLayoutMonitor * layoutMonitor;                        //@synthesize layoutMonitor=_layoutMonitor - In the implementation block
@property (assign,getter=isApplicationVisible,nonatomic) BOOL applicationVisible;              //@synthesize applicationVisible=_applicationVisible - In the implementation block
-(void)dealloc;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(BOOL)isApplicationVisible;
-(void)setApplicationVisible:(BOOL)arg1 ;
-(FBSDisplayLayoutMonitor *)layoutMonitor;
@end

