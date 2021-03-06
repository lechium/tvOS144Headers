/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface TUTestState : NSObject {

	NSMutableDictionary* _objects;
	int _signalCount;

}

@property (nonatomic,readonly) int signalCount;              //@synthesize signalCount=_signalCount - In the implementation block
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)signal;
-(void)incrementIntegerForKey:(id)arg1 ;
-(int)waitWithTimeout:(double)arg1 ;
-(int)signalCount;
@end

