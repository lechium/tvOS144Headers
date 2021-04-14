/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet;

@interface VCMediaNegotiatorCaptionsResults : NSObject {

	BOOL _remoteCanDisplayCaptions;
	NSSet* _localLanguages;
	NSSet* _remoteLanguages;

}

@property (assign,nonatomic) BOOL remoteCanDisplayCaptions;              //@synthesize remoteCanDisplayCaptions=_remoteCanDisplayCaptions - In the implementation block
@property (nonatomic,retain) NSSet * localLanguages;                     //@synthesize localLanguages=_localLanguages - In the implementation block
@property (nonatomic,retain) NSSet * remoteLanguages;                    //@synthesize remoteLanguages=_remoteLanguages - In the implementation block
-(void)dealloc;
-(NSSet *)localLanguages;
-(void)setLocalLanguages:(NSSet *)arg1 ;
-(NSSet *)remoteLanguages;
-(void)setRemoteLanguages:(NSSet *)arg1 ;
-(BOOL)remoteCanDisplayCaptions;
-(void)setRemoteCanDisplayCaptions:(BOOL)arg1 ;
@end

