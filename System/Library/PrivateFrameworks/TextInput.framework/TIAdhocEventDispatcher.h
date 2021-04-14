/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface TIAdhocEventDispatcher : NSObject {

	NSMutableDictionary* _eventSpecMap;

}

@property (nonatomic,retain) NSMutableDictionary * eventSpecMap;              //@synthesize eventSpecMap=_eventSpecMap - In the implementation block
+(id)sharedInstance;
-(id)initFromConfig:(id)arg1 ;
-(void)dispatchEventForStatisticWithName:(id)arg1 andValue:(long long*)arg2 ;
-(void)dispatchEventForStatisticWithName:(id)arg1 andValue:(long long*)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)loadEventSpecMapFromConfig:(id)arg1 ;
-(id)replacePeriodsInString:(id)arg1 ;
-(NSMutableDictionary *)eventSpecMap;
-(void)setEventSpecMap:(NSMutableDictionary *)arg1 ;
@end

