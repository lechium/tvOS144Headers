/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface BWStillImageCaptureMetadata : NSObject <NSSecureCoding> {

	int _snrType;
	float _snr;
	int _deviceType;
	NSArray* _slaveFocalLengths;
	NSArray* _slaveLensFNumbers;
	float _totalZoomFactor;
	BOOL _intelligentDistortionCorrectionEnabled;
	BOOL _geometricDistortionCorrectionEnabled;
	int _intelligentDistortionCorrectionVersion;
	int _systemPressureLevel;
	int _cameraControlsStatisticsMaster;

}

@property (assign,nonatomic) int snrType;                                              //@synthesize snrType=_snrType - In the implementation block
@property (assign,nonatomic) float snr;                                                //@synthesize snr=_snr - In the implementation block
@property (assign,nonatomic) int deviceType;                                           //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) NSArray * slaveFocalLengths;                              //@synthesize slaveFocalLengths=_slaveFocalLengths - In the implementation block
@property (nonatomic,retain) NSArray * slaveLensFNumbers;                              //@synthesize slaveLensFNumbers=_slaveLensFNumbers - In the implementation block
@property (assign,nonatomic) float totalZoomFactor;                                    //@synthesize totalZoomFactor=_totalZoomFactor - In the implementation block
@property (assign,nonatomic) BOOL intelligentDistortionCorrectionEnabled;              //@synthesize intelligentDistortionCorrectionEnabled=_intelligentDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL geometricDistortionCorrectionEnabled;                //@synthesize geometricDistortionCorrectionEnabled=_geometricDistortionCorrectionEnabled - In the implementation block
@property (assign,nonatomic) int intelligentDistortionCorrectionVersion;               //@synthesize intelligentDistortionCorrectionVersion=_intelligentDistortionCorrectionVersion - In the implementation block
@property (assign,nonatomic) int systemPressureLevel;                                  //@synthesize systemPressureLevel=_systemPressureLevel - In the implementation block
@property (assign,nonatomic) int cameraControlsStatisticsMaster;                       //@synthesize cameraControlsStatisticsMaster=_cameraControlsStatisticsMaster - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)snr;
-(void)setSnr:(float)arg1 ;
-(int)deviceType;
-(void)setDeviceType:(int)arg1 ;
-(int)snrType;
-(NSArray *)slaveFocalLengths;
-(NSArray *)slaveLensFNumbers;
-(float)totalZoomFactor;
-(BOOL)intelligentDistortionCorrectionEnabled;
-(BOOL)geometricDistortionCorrectionEnabled;
-(int)intelligentDistortionCorrectionVersion;
-(int)systemPressureLevel;
-(int)cameraControlsStatisticsMaster;
-(void)setSnrType:(int)arg1 ;
-(void)setSlaveFocalLengths:(NSArray *)arg1 ;
-(void)setSlaveLensFNumbers:(NSArray *)arg1 ;
-(void)setTotalZoomFactor:(float)arg1 ;
-(void)setIntelligentDistortionCorrectionEnabled:(BOOL)arg1 ;
-(void)setGeometricDistortionCorrectionEnabled:(BOOL)arg1 ;
-(void)setIntelligentDistortionCorrectionVersion:(int)arg1 ;
-(void)setSystemPressureLevel:(int)arg1 ;
-(void)setCameraControlsStatisticsMaster:(int)arg1 ;
@end

