/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VNRequestCancelling.h>
#import <libobjc.A.dylib/VNTrackerProviding.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface VNRequestPerformer : NSObject <VNRequestCancelling, VNTrackerProviding> {

	NSLock* _requestLock;
	NSMutableArray* _requestsInFlight;
	NSMutableArray* _requestsPending;
	NSMutableDictionary* _sequencedRequestObservations;
	NSMutableSet* _trackerKeys;

}
-(id)init;
-(void)dealloc;
-(void)cancelAllRequests;
-(id)trackerWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)releaseTracker:(id)arg1 ;
-(BOOL)_validateAndPrepareRequests:(id)arg1 error:(id*)arg2 ;
-(id)dependencyAnalyzedRequestsForRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id*)arg3 ;
-(id)orderedRequestsForRequests:(id)arg1 ;
-(BOOL)_performOrderedRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)performRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id*)arg4 ;
-(BOOL)performRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)performDependentRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id*)arg4 ;
-(void)recordSequencedObservationsForRequest:(id)arg1 ;
-(id)previousSequencedObservationsForRequest:(id)arg1 ;
@end

