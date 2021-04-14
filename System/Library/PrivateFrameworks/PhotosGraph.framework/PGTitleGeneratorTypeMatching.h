/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:05 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PGTitleGeneratorTypeMatching : NSObject {

	long long _type;
	/*^block*/id _eventEvaluationBlock;

}

@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) id eventEvaluationBlock;              //@synthesize eventEvaluationBlock=_eventEvaluationBlock - In the implementation block
+(id)typeMatchingWithType:(long long)arg1 eventEvaluationBlock:(/*^block*/id)arg2 ;
-(long long)type;
-(id)eventEvaluationBlock;
-(id)initWithType:(long long)arg1 eventEvaluationBlock:(/*^block*/id)arg2 ;
@end

