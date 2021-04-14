/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSSet, NSDate;


@protocol PLSyncableAsset <NSObject,PLSyncableObject>
@property (nonatomic,retain,readonly) NSString * cloudIdentifier; 
@property (nonatomic,retain) NSSet * detectedFaces; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) BOOL faceDetectionComplete; 
@property (nonatomic,copy,readonly) NSDate * dateForComparingAdjustmentVersions; 
@property (nonatomic,readonly) id faceAdjustmentVersion; 
@property (nonatomic,copy,readonly) NSString * syncedAdjustmentFingerprint; 
@property (nonatomic,readonly) BOOL hasAdjustments; 
@required
-(long long)width;
-(long long)height;
-(NSString *)cloudIdentifier;
-(BOOL)hasAdjustments;
-(id)syncDescription;
-(NSSet *)detectedFaces;
-(id)faceAdjustmentVersion;
-(NSString *)syncedAdjustmentFingerprint;
-(void)markForNeedingFaceDetection;
-(void)setDetectedFaces:(id)arg1;
-(BOOL)faceDetectionComplete;
-(NSDate *)dateForComparingAdjustmentVersions;

@end

