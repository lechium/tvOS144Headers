/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class DecisionDetails;

@interface ManagedEvent : NSObject {

	unsigned long long _id_number;
	DecisionDetails* _details;

}

@property (assign,nonatomic) unsigned long long id_number;              //@synthesize id_number=_id_number - In the implementation block
@property (nonatomic,retain) DecisionDetails * details;                 //@synthesize details=_details - In the implementation block
-(id)description;
-(DecisionDetails *)details;
-(void)setDetails:(DecisionDetails *)arg1 ;
-(id)initWithId:(unsigned long long)arg1 details:(id)arg2 ;
-(void)serializeToXPCObject:(id)arg1 ;
-(unsigned long long)id_number;
-(void)setId_number:(unsigned long long)arg1 ;
@end
