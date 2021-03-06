/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceLandmarks.h>

@class VNFaceLandmarkRegion2D, NSArray;

@interface VNFaceLandmarks2D : VNFaceLandmarks {

	VNFaceLandmarkRegion2D* _allPoints;
	os_unfair_lock_s _allPointsLock;
	VNFaceLandmarkRegion2D* _faceContour;
	os_unfair_lock_s _faceContourLock;
	VNFaceLandmarkRegion2D* _leftEye;
	os_unfair_lock_s _leftEyeLock;
	VNFaceLandmarkRegion2D* _rightEye;
	os_unfair_lock_s _rightEyeLock;
	VNFaceLandmarkRegion2D* _leftEyebrow;
	os_unfair_lock_s _leftEyebrowLock;
	VNFaceLandmarkRegion2D* _rightEyebrow;
	os_unfair_lock_s _rightEyebrowLock;
	VNFaceLandmarkRegion2D* _nose;
	os_unfair_lock_s _noseLock;
	VNFaceLandmarkRegion2D* _noseCrest;
	os_unfair_lock_s _noseCrestLock;
	VNFaceLandmarkRegion2D* _medianLine;
	os_unfair_lock_s _medianLineLock;
	VNFaceLandmarkRegion2D* _outerLips;
	os_unfair_lock_s _outerLipsLock;
	VNFaceLandmarkRegion2D* _innerLips;
	os_unfair_lock_s _innerLipsLock;
	VNFaceLandmarkRegion2D* _leftPupil;
	os_unfair_lock_s _leftPupilLock;
	VNFaceLandmarkRegion2D* _rightPupil;
	os_unfair_lock_s _rightPupilLock;
	unsigned long long _constellation;
	NSArray* _precisionEstimatesPerPoint;
	NSArray* _occlusionFlagsPerPoint;

}

@property (assign) unsigned long long constellation;                     //@synthesize constellation=_constellation - In the implementation block
@property (retain) NSArray * precisionEstimatesPerPoint;                 //@synthesize precisionEstimatesPerPoint=_precisionEstimatesPerPoint - In the implementation block
@property (retain) NSArray * occlusionFlagsPerPoint;                     //@synthesize occlusionFlagsPerPoint=_occlusionFlagsPerPoint - In the implementation block
@property (readonly) VNFaceLandmarkRegion2D * allPoints;                 //@synthesize allPoints=_allPoints - In the implementation block
@property (readonly) VNFaceLandmarkRegion2D * faceContour;               //@synthesize faceContour=_faceContour - In the implementation block
@property (readonly) VNFaceLandmarkRegion2D * leftEye;                   //@synthesize leftEye=_leftEye - In the implementation block
@property (readonly) VNFaceLandmarkRegion2D * rightEye;                  //@synthesize rightEye=_rightEye - In the implementation block
@property (readonly) VNFaceLandmarkRegion2D * leftEyebrow;               //@synthesize leftEyebrow=_leftEyebrow - In the implementation block
@property (readonly) VNFaceLandmarkRegion2D * rightEyebrow;              //@synthesize rightEyebrow=_rightEyebrow - In the implementation block
@property (readonly) VNFaceLandmarkRegion2D * nose;                      //@synthesize nose=_nose - In the implementation block
@property (readonly) VNFaceLandmarkRegion2D * noseCrest;                 //@synthesize noseCrest=_noseCrest - In the implementation block
@property (readonly) VNFaceLandmarkRegion2D * medianLine;                //@synthesize medianLine=_medianLine - In the implementation block
@property (readonly) VNFaceLandmarkRegion2D * outerLips;                 //@synthesize outerLips=_outerLips - In the implementation block
@property (readonly) VNFaceLandmarkRegion2D * innerLips;                 //@synthesize innerLips=_innerLips - In the implementation block
@property (readonly) VNFaceLandmarkRegion2D * leftPupil;                 //@synthesize leftPupil=_leftPupil - In the implementation block
@property (readonly) VNFaceLandmarkRegion2D * rightPupil;                //@synthesize rightPupil=_rightPupil - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)landmarkPointSizeInBytes;
+(id)_createNSArrayFrom:(id)arg1 withPointIndices:(const int*)arg2 andPointCount:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(VNFaceLandmarkRegion2D *)leftEye;
-(VNFaceLandmarkRegion2D *)rightEye;
-(VNFaceLandmarkRegion2D *)leftPupil;
-(VNFaceLandmarkRegion2D *)rightPupil;
-(VNFaceLandmarkRegion2D *)allPoints;
-(VNFaceLandmarkRegion2D *)faceContour;
-(VNFaceLandmarkRegion2D *)innerLips;
-(VNFaceLandmarkRegion2D *)leftEyebrow;
-(VNFaceLandmarkRegion2D *)medianLine;
-(VNFaceLandmarkRegion2D *)nose;
-(VNFaceLandmarkRegion2D *)noseCrest;
-(VNFaceLandmarkRegion2D *)outerLips;
-(VNFaceLandmarkRegion2D *)rightEyebrow;
-(void)_initLocks;
-(unsigned long long)constellation;
-(void)setConstellation:(unsigned long long)arg1 ;
-(NSArray *)precisionEstimatesPerPoint;
-(NSArray *)occlusionFlagsPerPoint;
-(void*)_createPointArray:(const int*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 pointsData:(id)arg2 pointCount:(unsigned long long)arg3 constellation:(unsigned long long)arg4 precisionEstimatesPerPoint:(id)arg5 occlusionFlagsPerPoint:(id)arg6 userFacingBBox:(CGRect)arg7 alignedBBox:(Geometry2D_rect2D_)arg8 landmarkScore:(float)arg9 ;
-(id)_createFaceLandmarks2DRegionFromPointIndexes:(const int*)arg1 andPointCount:(unsigned long long)arg2 ;
-(void)setPrecisionEstimatesPerPoint:(NSArray *)arg1 ;
-(void)setOcclusionFlagsPerPoint:(NSArray *)arg1 ;
@end

