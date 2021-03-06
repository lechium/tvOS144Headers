/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTStandardEventHandler.h>

@class NSMutableArray;

@interface MTPageEventHandler : MTStandardEventHandler {

	NSMutableArray* _trackedPageHistory;

}

@property (nonatomic,retain) NSMutableArray * trackedPageHistory;                         //@synthesize trackedPageHistory=_trackedPageHistory - In the implementation block
@property (assign,nonatomic,__weak) id<MTPageEventHandlerDelegate> delegate; 
-(id)eventType;
-(id)knownFields;
-(id)eventVersion:(id)arg1 ;
-(void)didCreateMetricsData:(id)arg1 ;
-(id)pageHistory:(id)arg1 ;
-(NSMutableArray *)trackedPageHistory;
-(void)updatePageHistoryWithPage:(id)arg1 ;
-(void)setTrackedPageHistory:(NSMutableArray *)arg1 ;
@end

