/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PSIGroup;

@interface PSIRankedGroup : NSObject {

	PSIGroup* _group;
	double _score;

}

@property (nonatomic,readonly) PSIGroup * group;              //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) double score;                    //@synthesize score=_score - In the implementation block
-(double)score;
-(PSIGroup *)group;
-(void)setScore:(double)arg1 ;
-(id)initWithGroup:(id)arg1 score:(double)arg2 ;
@end

