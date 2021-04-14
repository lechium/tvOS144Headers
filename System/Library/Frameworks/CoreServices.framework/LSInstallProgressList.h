/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface LSInstallProgressList : NSObject {

	NSMutableDictionary* _progresses;
	NSMutableDictionary* _subscriptions;

}
-(id)description;
-(id)init;
-(id)progressForBundleID:(id)arg1 ;
-(id)subscriberForBundleID:(id)arg1 andPublishingKey:(id)arg2 ;
-(void)setProgress:(id)arg1 forBundleID:(id)arg2 ;
-(void)removeProgressForBundleID:(id)arg1 ;
-(void)removeSubscriberForPublishingKey:(id)arg1 andBundleID:(id)arg2 ;
-(void)addSubscriber:(id)arg1 forPublishingKey:(id)arg2 andBundleID:(id)arg3 ;
@end

