/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SANPGetNowPlayingQueueDetailsRemote.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface MPAssistantGetNowPlayingQueueDetailsRemote : SANPGetNowPlayingQueueDetailsRemote <AFServiceCommand> {

	NSString* _requestAceHash;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

