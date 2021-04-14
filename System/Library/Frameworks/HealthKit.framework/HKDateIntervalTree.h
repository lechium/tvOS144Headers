/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HealthKit/HealthKit-Structs.h>
@interface HKDateIntervalTree : NSObject {

	unique_ptr<HKIntervalTree<double>, std::__1::default_delete<HKIntervalTree<double> > >* _tree;

}
-(id)init;
-(void)insertInterval:(id)arg1 ;
-(BOOL)hasOverlapWithInterval:(id)arg1 ;
-(id)mergedIntervals;
@end

