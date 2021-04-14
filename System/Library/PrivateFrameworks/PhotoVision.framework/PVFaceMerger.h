/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PVVisionIntegrating;
@class PVContext;

@interface PVFaceMerger : NSObject {

	PVContext* _context;
	id<PVVisionIntegrating> _visionIntegration;

}
-(id)mergeExistingFaces:(id)arg1 withDetectedFaces:(id)arg2 forImage:(id)arg3 ;
-(id)_faceObservationsWithBBoxFromPVFaces:(id)arg1 mapping:(id)arg2 ;
-(id)_bboxAlignedFaceObservationsFromFaceObservations:(id)arg1 inImage:(id)arg2 withError:(id*)arg3 ;
-(BOOL)_alignBBoxForPVFaces:(id)arg1 forImage:(id)arg2 ;
-(id)_sortedViableFaceMergePairsFromQueryFaces:(id)arg1 andCandidateFaces:(id)arg2 ;
-(id)initWithContext:(id)arg1 visionIntegration:(id)arg2 ;
-(void)_configureRequest:(id)arg1 ;
@end

