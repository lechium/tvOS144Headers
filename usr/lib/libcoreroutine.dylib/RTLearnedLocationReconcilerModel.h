/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RTLearnedLocationReconcilerModel : NSObject
-(double)weightForVisit:(id)arg1 modelContext:(id)arg2 ;
-(double)scoreForDeviceClass:(id)arg1 ;
-(double)_weightWithDeviceWeight:(double)arg1 visitsPercentage:(double)arg2 transitionsPercentage:(double)arg3 semanticLabel:(BOOL)arg4 firstVisit:(BOOL)arg5 earliestTransition:(BOOL)arg6 rawLocationCount:(unsigned long long)arg7 ;
@end

