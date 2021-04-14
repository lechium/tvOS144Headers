/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <CoreRecognition/CRCameraReaderOutput.h>

@class NSAttributedString;

@interface CRCameraReaderOutputCameraText : CRCameraReaderOutput

@property (copy) NSAttributedString * overlayString; 
@property (readonly) CGRect boundingBox; 
@property (readonly) float rotation; 
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(CGRect)boundingBox;
-(void)setBoundingBox:(CGRect)arg1 ;
-(NSAttributedString *)overlayString;
-(void)setOverlayString:(NSAttributedString *)arg1 ;
@end

