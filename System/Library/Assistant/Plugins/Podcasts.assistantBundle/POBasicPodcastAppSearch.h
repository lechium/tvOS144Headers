/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAMPBasicPodcastAppSearch.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface POBasicPodcastAppSearch : SAMPBasicPodcastAppSearch <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_perform;
-(id)_validate;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)modelObjectsAsSAMPCollections:(id)arg1 ;
@end

