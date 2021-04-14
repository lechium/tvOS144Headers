/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSSet, PSTopic;

@interface PSSubscription : HMFObject {

	NSSet* _filters;
	NSSet* _conditionals;
	PSTopic* _topic;

}

@property (__weak,readonly) PSTopic * topic;                 //@synthesize topic=_topic - In the implementation block
@property (copy,readonly) NSSet * filters;                   //@synthesize filters=_filters - In the implementation block
@property (copy,readonly) NSSet * conditionals;              //@synthesize conditionals=_conditionals - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(PSTopic *)topic;
-(NSSet *)filters;
-(id)attributeDescriptions;
-(void)unsubscribe;
-(NSSet *)conditionals;
-(id)initWithTopic:(id)arg1 filters:(id)arg2 conditionals:(id)arg3 ;
@end
