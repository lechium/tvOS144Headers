/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSArray;

@interface _CNSortsByPositionInAuxiliaryArray : NSObject {

	NSDictionary* _ranks;
	NSArray* _auxiliaryValues;
	/*^block*/id _transform;

}

@property (nonatomic,copy,readonly) id transform;                           //@synthesize transform=_transform - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * ranks;                   //@synthesize ranks=_ranks - In the implementation block
@property (nonatomic,copy,readonly) NSArray * auxiliaryValues;              //@synthesize auxiliaryValues=_auxiliaryValues - In the implementation block
+(/*^block*/id)comparatorForSortingAccordingToAuxiliaryValues:(id)arg1 transform:(/*^block*/id)arg2 ;
-(/*^block*/id)comparator;
-(id)transform;
-(NSDictionary *)ranks;
-(id)initWithAuxiliaryValues:(id)arg1 transform:(/*^block*/id)arg2 ;
-(void)prepareRankingIndex;
-(id)rankForObject:(id)arg1 ;
-(NSArray *)auxiliaryValues;
@end
