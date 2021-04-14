/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPBaroCalibrationIndication, CLPMotionActivity, CLPPipelineDiagnosticReport, CLPSatelliteReport;

@interface CLPLocation : PBCodable <NSCopying> {

	double _latitude;
	double _longitude;
	double _timestamp;
	float _altitude;
	NSMutableArray* _appBundleIdIndices;
	CLPBaroCalibrationIndication* _baroCalibrationIndication;
	int _context;
	float _course;
	float _courseAccuracy;
	CLPMotionActivity* _dominantMotionActivity;
	int _floor;
	float _horizontalAccuracy;
	float _horzUncSemiMaj;
	float _horzUncSemiMajAz;
	float _horzUncSemiMin;
	int _modeIndicator;
	CLPMotionActivity* _motionActivity;
	int _motionActivityConfidence;
	int _motionActivityType;
	CLPPipelineDiagnosticReport* _pipelineDiagnosticReport;
	int _provider;
	CLPMotionActivity* _rawMotionActivity;
	CLPSatelliteReport* _satReport;
	float _speed;
	float _speedAccuracy;
	float _verticalAccuracy;
	BOOL _isFromLocationController;
	BOOL _motionVehicleConnected;
	BOOL _motionVehicleConnectedStateChanged;
	SCD_Struct_CL11 _has;

}

@property (assign,nonatomic) double latitude;                                                       //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                                                      //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) float horizontalAccuracy;                                              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (assign,nonatomic) double timestamp;                                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) float altitude;                                                        //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) BOOL hasVerticalAccuracy; 
@property (assign,nonatomic) float verticalAccuracy;                                                //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) float speed;                                                           //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) BOOL hasCourse; 
@property (assign,nonatomic) float course;                                                          //@synthesize course=_course - In the implementation block
@property (assign,nonatomic) BOOL hasContext; 
@property (assign,nonatomic) int context;                                                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL hasMotionActivityType; 
@property (assign,nonatomic) int motionActivityType;                                                //@synthesize motionActivityType=_motionActivityType - In the implementation block
@property (assign,nonatomic) BOOL hasMotionActivityConfidence; 
@property (assign,nonatomic) int motionActivityConfidence;                                          //@synthesize motionActivityConfidence=_motionActivityConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasProvider; 
@property (assign,nonatomic) int provider;                                                          //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) BOOL hasFloor; 
@property (assign,nonatomic) int floor;                                                             //@synthesize floor=_floor - In the implementation block
@property (nonatomic,retain) NSMutableArray * appBundleIdIndices;                                   //@synthesize appBundleIdIndices=_appBundleIdIndices - In the implementation block
@property (assign,nonatomic) BOOL hasMotionVehicleConnectedStateChanged; 
@property (assign,nonatomic) BOOL motionVehicleConnectedStateChanged;                               //@synthesize motionVehicleConnectedStateChanged=_motionVehicleConnectedStateChanged - In the implementation block
@property (assign,nonatomic) BOOL hasMotionVehicleConnected; 
@property (assign,nonatomic) BOOL motionVehicleConnected;                                           //@synthesize motionVehicleConnected=_motionVehicleConnected - In the implementation block
@property (nonatomic,readonly) BOOL hasRawMotionActivity; 
@property (nonatomic,retain) CLPMotionActivity * rawMotionActivity;                                 //@synthesize rawMotionActivity=_rawMotionActivity - In the implementation block
@property (nonatomic,readonly) BOOL hasMotionActivity; 
@property (nonatomic,retain) CLPMotionActivity * motionActivity;                                    //@synthesize motionActivity=_motionActivity - In the implementation block
@property (nonatomic,readonly) BOOL hasDominantMotionActivity; 
@property (nonatomic,retain) CLPMotionActivity * dominantMotionActivity;                            //@synthesize dominantMotionActivity=_dominantMotionActivity - In the implementation block
@property (assign,nonatomic) BOOL hasCourseAccuracy; 
@property (assign,nonatomic) float courseAccuracy;                                                  //@synthesize courseAccuracy=_courseAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedAccuracy; 
@property (assign,nonatomic) float speedAccuracy;                                                   //@synthesize speedAccuracy=_speedAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasModeIndicator; 
@property (assign,nonatomic) int modeIndicator;                                                     //@synthesize modeIndicator=_modeIndicator - In the implementation block
@property (assign,nonatomic) BOOL hasHorzUncSemiMaj; 
@property (assign,nonatomic) float horzUncSemiMaj;                                                  //@synthesize horzUncSemiMaj=_horzUncSemiMaj - In the implementation block
@property (assign,nonatomic) BOOL hasHorzUncSemiMin; 
@property (assign,nonatomic) float horzUncSemiMin;                                                  //@synthesize horzUncSemiMin=_horzUncSemiMin - In the implementation block
@property (assign,nonatomic) BOOL hasHorzUncSemiMajAz; 
@property (assign,nonatomic) float horzUncSemiMajAz;                                                //@synthesize horzUncSemiMajAz=_horzUncSemiMajAz - In the implementation block
@property (nonatomic,readonly) BOOL hasSatReport; 
@property (nonatomic,retain) CLPSatelliteReport * satReport;                                        //@synthesize satReport=_satReport - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromLocationController; 
@property (assign,nonatomic) BOOL isFromLocationController;                                         //@synthesize isFromLocationController=_isFromLocationController - In the implementation block
@property (nonatomic,readonly) BOOL hasPipelineDiagnosticReport; 
@property (nonatomic,retain) CLPPipelineDiagnosticReport * pipelineDiagnosticReport;                //@synthesize pipelineDiagnosticReport=_pipelineDiagnosticReport - In the implementation block
@property (nonatomic,readonly) BOOL hasBaroCalibrationIndication; 
@property (nonatomic,retain) CLPBaroCalibrationIndication * baroCalibrationIndication;              //@synthesize baroCalibrationIndication=_baroCalibrationIndication - In the implementation block
+(Class)appBundleIdIndicesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)context;
-(double)timestamp;
-(void)setContext:(int)arg1 ;
-(void)setProvider:(int)arg1 ;
-(int)provider;
-(void)setSpeed:(float)arg1 ;
-(float)speed;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHorizontalAccuracy:(float)arg1 ;
-(float)horizontalAccuracy;
-(void)setHasProvider:(BOOL)arg1 ;
-(BOOL)hasProvider;
-(CLPMotionActivity *)motionActivity;
-(BOOL)hasContext;
-(void)setMotionActivity:(CLPMotionActivity *)arg1 ;
-(BOOL)hasMotionActivity;
-(void)addAppBundleIdIndices:(id)arg1 ;
-(unsigned long long)appBundleIdIndicesCount;
-(void)clearAppBundleIdIndices;
-(id)appBundleIdIndicesAtIndex:(unsigned long long)arg1 ;
-(void)setRawMotionActivity:(CLPMotionActivity *)arg1 ;
-(void)setDominantMotionActivity:(CLPMotionActivity *)arg1 ;
-(void)setSatReport:(CLPSatelliteReport *)arg1 ;
-(void)setPipelineDiagnosticReport:(CLPPipelineDiagnosticReport *)arg1 ;
-(void)setBaroCalibrationIndication:(CLPBaroCalibrationIndication *)arg1 ;
-(void)setAltitude:(float)arg1 ;
-(void)setHasAltitude:(BOOL)arg1 ;
-(BOOL)hasAltitude;
-(void)setVerticalAccuracy:(float)arg1 ;
-(void)setHasVerticalAccuracy:(BOOL)arg1 ;
-(BOOL)hasVerticalAccuracy;
-(void)setHasSpeed:(BOOL)arg1 ;
-(BOOL)hasSpeed;
-(void)setCourse:(float)arg1 ;
-(void)setHasCourse:(BOOL)arg1 ;
-(BOOL)hasCourse;
-(void)setHasContext:(BOOL)arg1 ;
-(void)setMotionActivityType:(int)arg1 ;
-(void)setHasMotionActivityType:(BOOL)arg1 ;
-(BOOL)hasMotionActivityType;
-(void)setMotionActivityConfidence:(int)arg1 ;
-(void)setHasMotionActivityConfidence:(BOOL)arg1 ;
-(BOOL)hasMotionActivityConfidence;
-(void)setFloor:(int)arg1 ;
-(void)setHasFloor:(BOOL)arg1 ;
-(BOOL)hasFloor;
-(void)setMotionVehicleConnectedStateChanged:(BOOL)arg1 ;
-(void)setHasMotionVehicleConnectedStateChanged:(BOOL)arg1 ;
-(BOOL)hasMotionVehicleConnectedStateChanged;
-(void)setMotionVehicleConnected:(BOOL)arg1 ;
-(void)setHasMotionVehicleConnected:(BOOL)arg1 ;
-(BOOL)hasMotionVehicleConnected;
-(BOOL)hasRawMotionActivity;
-(BOOL)hasDominantMotionActivity;
-(void)setCourseAccuracy:(float)arg1 ;
-(void)setHasCourseAccuracy:(BOOL)arg1 ;
-(BOOL)hasCourseAccuracy;
-(void)setSpeedAccuracy:(float)arg1 ;
-(void)setHasSpeedAccuracy:(BOOL)arg1 ;
-(BOOL)hasSpeedAccuracy;
-(int)modeIndicator;
-(void)setModeIndicator:(int)arg1 ;
-(void)setHasModeIndicator:(BOOL)arg1 ;
-(BOOL)hasModeIndicator;
-(id)modeIndicatorAsString:(int)arg1 ;
-(int)StringAsModeIndicator:(id)arg1 ;
-(void)setHorzUncSemiMaj:(float)arg1 ;
-(void)setHasHorzUncSemiMaj:(BOOL)arg1 ;
-(BOOL)hasHorzUncSemiMaj;
-(void)setHorzUncSemiMin:(float)arg1 ;
-(void)setHasHorzUncSemiMin:(BOOL)arg1 ;
-(BOOL)hasHorzUncSemiMin;
-(void)setHorzUncSemiMajAz:(float)arg1 ;
-(void)setHasHorzUncSemiMajAz:(BOOL)arg1 ;
-(BOOL)hasHorzUncSemiMajAz;
-(BOOL)hasSatReport;
-(void)setIsFromLocationController:(BOOL)arg1 ;
-(void)setHasIsFromLocationController:(BOOL)arg1 ;
-(BOOL)hasIsFromLocationController;
-(BOOL)hasPipelineDiagnosticReport;
-(BOOL)hasBaroCalibrationIndication;
-(float)altitude;
-(float)verticalAccuracy;
-(float)course;
-(int)motionActivityType;
-(int)motionActivityConfidence;
-(int)floor;
-(NSMutableArray *)appBundleIdIndices;
-(void)setAppBundleIdIndices:(NSMutableArray *)arg1 ;
-(BOOL)motionVehicleConnectedStateChanged;
-(BOOL)motionVehicleConnected;
-(CLPMotionActivity *)rawMotionActivity;
-(CLPMotionActivity *)dominantMotionActivity;
-(float)courseAccuracy;
-(float)speedAccuracy;
-(float)horzUncSemiMaj;
-(float)horzUncSemiMin;
-(float)horzUncSemiMajAz;
-(CLPSatelliteReport *)satReport;
-(BOOL)isFromLocationController;
-(CLPPipelineDiagnosticReport *)pipelineDiagnosticReport;
-(CLPBaroCalibrationIndication *)baroCalibrationIndication;
@end

