/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class PHFaceprint, PHObjectPlaceholder, NSString, NSManagedObjectID;

@interface PHFaceChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	PHFaceprint* _faceprint;
	BOOL _didSetFaceprint;
	BOOL _shouldClearFaceCropGenerationState;

}

@property (assign,nonatomic) BOOL shouldClearFaceCropGenerationState;                        //@synthesize shouldClearFaceCropGenerationState=_shouldClearFaceCropGenerationState - In the implementation block
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedFace; 
@property (assign,nonatomic) double size; 
@property (assign,nonatomic) double centerX; 
@property (assign,nonatomic) double centerY; 
@property (assign,nonatomic) long long sourceWidth; 
@property (assign,nonatomic) long long sourceHeight; 
@property (assign,nonatomic) double leftEyeX; 
@property (assign,nonatomic) double leftEyeY; 
@property (assign,nonatomic) double rightEyeX; 
@property (assign,nonatomic) double rightEyeY; 
@property (assign,nonatomic) double mouthX; 
@property (assign,nonatomic) double mouthY; 
@property (assign,nonatomic) double roll; 
@property (assign,nonatomic) double yaw; 
@property (assign,nonatomic) BOOL isInVIPModel; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isInTrash,nonatomic) BOOL inTrash; 
@property (assign,nonatomic) BOOL manual; 
@property (assign,nonatomic) BOOL hasSmile; 
@property (assign,nonatomic) double blurScore; 
@property (assign,getter=isLeftEyeClosed,nonatomic) BOOL leftEyeClosed; 
@property (assign,getter=isRightEyeClosed,nonatomic) BOOL rightEyeClosed; 
@property (nonatomic,copy) id adjustmentVersion; 
@property (assign,nonatomic) long long nameSource; 
@property (assign,nonatomic) long long faceAlgorithmVersion; 
@property (assign,nonatomic) double poseYaw; 
@property (nonatomic,retain) PHFaceprint * faceprint; 
@property (assign,nonatomic) long long clusterSequenceNumber; 
@property (assign,nonatomic) long long qualityMeasure; 
@property (assign,nonatomic) double quality; 
@property (assign,nonatomic) unsigned short ageType; 
@property (assign,nonatomic) unsigned short genderType; 
@property (assign,nonatomic) unsigned short sexType; 
@property (assign,nonatomic) unsigned short eyesState; 
@property (assign,nonatomic) unsigned short smileType; 
@property (assign,nonatomic) unsigned short facialHairType; 
@property (assign,nonatomic) unsigned short hairColorType; 
@property (assign,nonatomic) unsigned short baldType; 
@property (assign,nonatomic) unsigned short glassesType; 
@property (assign,nonatomic) unsigned short eyeMakeupType; 
@property (assign,nonatomic) unsigned short lipMakeupType; 
@property (nonatomic,retain) NSString * groupingIdentifier; 
@property (readonly) BOOL isNewRequest; 
@property (assign,nonatomic) BOOL shouldPerformConcurrentWork; 
@property (getter=isMutated,readonly) BOOL mutated; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) long long accessScopeOptionsRequirement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)deleteFaces:(id)arg1 ;
+(id)creationRequestForFace;
+(id)changeRequestForFace:(id)arg1 ;
-(double)size;
-(void)setSize:(double)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(long long)sourceWidth;
-(long long)sourceHeight;
-(PHFaceprint *)faceprint;
-(void)setFaceprint:(PHFaceprint *)arg1 ;
-(BOOL)hasSmile;
-(double)yaw;
-(double)roll;
-(void)setYaw:(double)arg1 ;
-(void)setRoll:(double)arg1 ;
-(double)centerX;
-(double)centerY;
-(void)setQuality:(double)arg1 ;
-(double)quality;
-(void)setManual:(BOOL)arg1 ;
-(void)setCenterX:(double)arg1 ;
-(void)setCenterY:(double)arg1 ;
-(void)setNameSource:(long long)arg1 ;
-(long long)nameSource;
-(void)setInTrash:(BOOL)arg1 ;
-(BOOL)isInTrash;
-(BOOL)manual;
-(long long)faceAlgorithmVersion;
-(void)setSourceHeight:(long long)arg1 ;
-(void)setSourceWidth:(long long)arg1 ;
-(void)setFaceAlgorithmVersion:(long long)arg1 ;
-(id)adjustmentVersion;
-(void)setAdjustmentVersion:(id)arg1 ;
-(double)blurScore;
-(BOOL)isLeftEyeClosed;
-(BOOL)isRightEyeClosed;
-(long long)qualityMeasure;
-(long long)clusterSequenceNumber;
-(void)setClusterSequenceNumber:(long long)arg1 ;
-(void)setGenderType:(unsigned short)arg1 ;
-(unsigned short)genderType;
-(void)setAgeType:(unsigned short)arg1 ;
-(unsigned short)ageType;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(NSString *)managedEntityName;
-(id)initForNewObject;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(PHObjectPlaceholder *)placeholderForCreatedFace;
-(double)leftEyeX;
-(void)setLeftEyeX:(double)arg1 ;
-(double)leftEyeY;
-(void)setLeftEyeY:(double)arg1 ;
-(double)rightEyeX;
-(void)setRightEyeX:(double)arg1 ;
-(double)rightEyeY;
-(void)setRightEyeY:(double)arg1 ;
-(double)mouthX;
-(void)setMouthX:(double)arg1 ;
-(double)mouthY;
-(void)setMouthY:(double)arg1 ;
-(BOOL)isInVIPModel;
-(void)setIsInVIPModel:(BOOL)arg1 ;
-(void)setHasSmile:(BOOL)arg1 ;
-(void)setBlurScore:(double)arg1 ;
-(void)setLeftEyeClosed:(BOOL)arg1 ;
-(void)setRightEyeClosed:(BOOL)arg1 ;
-(double)poseYaw;
-(void)setPoseYaw:(double)arg1 ;
-(void)setQualityMeasure:(long long)arg1 ;
-(unsigned short)eyesState;
-(void)setEyesState:(unsigned short)arg1 ;
-(unsigned short)smileType;
-(void)setSmileType:(unsigned short)arg1 ;
-(unsigned short)facialHairType;
-(void)setFacialHairType:(unsigned short)arg1 ;
-(unsigned short)hairColorType;
-(void)setHairColorType:(unsigned short)arg1 ;
-(unsigned short)baldType;
-(void)setBaldType:(unsigned short)arg1 ;
-(unsigned short)glassesType;
-(void)setGlassesType:(unsigned short)arg1 ;
-(unsigned short)eyeMakeupType;
-(void)setEyeMakeupType:(unsigned short)arg1 ;
-(unsigned short)lipMakeupType;
-(void)setLipMakeupType:(unsigned short)arg1 ;
-(NSString *)groupingIdentifier;
-(void)setGroupingIdentifier:(NSString *)arg1 ;
-(unsigned short)sexType;
-(void)setSexType:(unsigned short)arg1 ;
-(void)setShouldClearFaceCropGenerationState:(BOOL)arg1 ;
-(BOOL)shouldClearFaceCropGenerationState;
@end

