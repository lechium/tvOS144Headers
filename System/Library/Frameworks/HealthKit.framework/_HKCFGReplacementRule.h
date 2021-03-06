/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface _HKCFGReplacementRule : NSObject {

	NSString* _description;
	NSArray* _rightHandSide;
	/*^block*/id _nodeEvaluator;
	unsigned long long _lengthIncrease;

}

@property (nonatomic,copy) NSArray * rightHandSide;                            //@synthesize rightHandSide=_rightHandSide - In the implementation block
@property (nonatomic,copy,readonly) id nodeEvaluator;                          //@synthesize nodeEvaluator=_nodeEvaluator - In the implementation block
@property (nonatomic,readonly) unsigned long long lengthIncrease;              //@synthesize lengthIncrease=_lengthIncrease - In the implementation block
+(id)ruleWithLHS:(id)arg1 RHS:(id)arg2 nodeEvaluator:(/*^block*/id)arg3 ;
-(id)description;
-(id)nodeEvaluator;
-(NSArray *)rightHandSide;
-(void)setRightHandSide:(NSArray *)arg1 ;
-(unsigned long long)lengthIncrease;
@end

