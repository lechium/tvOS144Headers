/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/VNCompoundRequest.h>

@class NSMapTable;

@interface VNHomologousObservationClassCompoundRequest : VNCompoundRequest {

	NSMapTable* _requestsClassMapping;

}
-(void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2 ;
-(id)initWithSubrequests:(id)arg1 ;
-(id)originalRequestsOfClass:(Class)arg1 ;
@end

