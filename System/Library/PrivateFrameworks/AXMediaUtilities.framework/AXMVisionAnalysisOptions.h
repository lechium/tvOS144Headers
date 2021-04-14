/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AXMTextDetectionOptions, NSArray;

@interface AXMVisionAnalysisOptions : NSObject <NSSecureCoding> {

	BOOL _detectFaceRectangles;
	BOOL _detectFaceNames;
	BOOL _detectFaceAttributes;
	BOOL _detectFaceExpressions;
	BOOL _detectFaceLandmarks;
	BOOL _detectFacePose;
	BOOL _detectScenes;
	BOOL _detectNSFW;
	BOOL _detectSignificantEvents;
	BOOL _detectModelClassifications;
	BOOL _detectCaptions;
	BOOL _detectTraits;
	BOOL _detectRectangles;
	BOOL _detectHorizon;
	BOOL _detectProminentObjects;
	BOOL _detectAesthetics;
	BOOL _detectText;
	BOOL _includeImageInResult;
	BOOL _preserveInputImageSize;
	long long _clientID;
	AXMTextDetectionOptions* _textDetectionOptions;
	NSArray* _ignoredLayerContextIDs;
	NSArray* _includedLayerContextIDs;

}

@property (assign,nonatomic) long long clientID;                                          //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) BOOL hasDetectionsEnabled; 
@property (nonatomic,readonly) BOOL detectFaces; 
@property (assign,nonatomic) BOOL detectFaceRectangles;                                   //@synthesize detectFaceRectangles=_detectFaceRectangles - In the implementation block
@property (assign,nonatomic) BOOL detectFaceNames;                                        //@synthesize detectFaceNames=_detectFaceNames - In the implementation block
@property (assign,nonatomic) BOOL detectFaceAttributes;                                   //@synthesize detectFaceAttributes=_detectFaceAttributes - In the implementation block
@property (assign,nonatomic) BOOL detectFaceExpressions;                                  //@synthesize detectFaceExpressions=_detectFaceExpressions - In the implementation block
@property (assign,nonatomic) BOOL detectFaceLandmarks;                                    //@synthesize detectFaceLandmarks=_detectFaceLandmarks - In the implementation block
@property (assign,nonatomic) BOOL detectFacePose;                                         //@synthesize detectFacePose=_detectFacePose - In the implementation block
@property (assign,nonatomic) BOOL detectScenes;                                           //@synthesize detectScenes=_detectScenes - In the implementation block
@property (assign,nonatomic) BOOL detectNSFW;                                             //@synthesize detectNSFW=_detectNSFW - In the implementation block
@property (assign,nonatomic) BOOL detectSignificantEvents;                                //@synthesize detectSignificantEvents=_detectSignificantEvents - In the implementation block
@property (assign,nonatomic) BOOL detectModelClassifications;                             //@synthesize detectModelClassifications=_detectModelClassifications - In the implementation block
@property (assign,nonatomic) BOOL detectCaptions;                                         //@synthesize detectCaptions=_detectCaptions - In the implementation block
@property (assign,nonatomic) BOOL detectTraits;                                           //@synthesize detectTraits=_detectTraits - In the implementation block
@property (assign,nonatomic) BOOL detectRectangles;                                       //@synthesize detectRectangles=_detectRectangles - In the implementation block
@property (assign,nonatomic) BOOL detectHorizon;                                          //@synthesize detectHorizon=_detectHorizon - In the implementation block
@property (assign,nonatomic) BOOL detectProminentObjects;                                 //@synthesize detectProminentObjects=_detectProminentObjects - In the implementation block
@property (assign,nonatomic) BOOL detectAesthetics;                                       //@synthesize detectAesthetics=_detectAesthetics - In the implementation block
@property (assign,nonatomic) BOOL detectText;                                             //@synthesize detectText=_detectText - In the implementation block
@property (nonatomic,retain) AXMTextDetectionOptions * textDetectionOptions;              //@synthesize textDetectionOptions=_textDetectionOptions - In the implementation block
@property (assign,nonatomic) BOOL includeImageInResult;                                   //@synthesize includeImageInResult=_includeImageInResult - In the implementation block
@property (nonatomic,retain) NSArray * ignoredLayerContextIDs;                            //@synthesize ignoredLayerContextIDs=_ignoredLayerContextIDs - In the implementation block
@property (nonatomic,retain) NSArray * includedLayerContextIDs;                           //@synthesize includedLayerContextIDs=_includedLayerContextIDs - In the implementation block
@property (assign,nonatomic) BOOL preserveInputImageSize;                                 //@synthesize preserveInputImageSize=_preserveInputImageSize - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultOptions;
+(id)voiceOverOptions;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)clientID;
-(void)setClientID:(long long)arg1 ;
-(BOOL)detectFaceAttributes;
-(BOOL)detectFaceExpressions;
-(BOOL)detectFaceLandmarks;
-(BOOL)detectFacePose;
-(BOOL)detectFaceRectangles;
-(NSArray *)ignoredLayerContextIDs;
-(NSArray *)includedLayerContextIDs;
-(BOOL)preserveInputImageSize;
-(BOOL)detectText;
-(BOOL)detectScenes;
-(BOOL)detectNSFW;
-(BOOL)detectSignificantEvents;
-(BOOL)detectModelClassifications;
-(BOOL)detectCaptions;
-(BOOL)detectFaces;
-(BOOL)detectTraits;
-(BOOL)detectHorizon;
-(BOOL)detectRectangles;
-(BOOL)detectProminentObjects;
-(BOOL)detectAesthetics;
-(BOOL)includeImageInResult;
-(AXMTextDetectionOptions *)textDetectionOptions;
-(void)setIncludeImageInResult:(BOOL)arg1 ;
-(void)setDetectText:(BOOL)arg1 ;
-(void)setTextDetectionOptions:(AXMTextDetectionOptions *)arg1 ;
-(void)setDetectScenes:(BOOL)arg1 ;
-(void)setDetectNSFW:(BOOL)arg1 ;
-(void)setDetectSignificantEvents:(BOOL)arg1 ;
-(void)setDetectModelClassifications:(BOOL)arg1 ;
-(void)setDetectCaptions:(BOOL)arg1 ;
-(void)setDetectTraits:(BOOL)arg1 ;
-(void)setDetectFaceRectangles:(BOOL)arg1 ;
-(void)setDetectFaceNames:(BOOL)arg1 ;
-(void)setDetectFaceAttributes:(BOOL)arg1 ;
-(void)setDetectFaceExpressions:(BOOL)arg1 ;
-(void)setDetectFaceLandmarks:(BOOL)arg1 ;
-(void)setDetectFacePose:(BOOL)arg1 ;
-(void)setDetectProminentObjects:(BOOL)arg1 ;
-(void)setDetectHorizon:(BOOL)arg1 ;
-(void)setDetectRectangles:(BOOL)arg1 ;
-(BOOL)detectFaceNames;
-(void)setDetectAesthetics:(BOOL)arg1 ;
-(void)setPreserveInputImageSize:(BOOL)arg1 ;
-(void)setIgnoredLayerContextIDs:(NSArray *)arg1 ;
-(void)setIncludedLayerContextIDs:(NSArray *)arg1 ;
-(BOOL)hasDetectionsEnabled;
-(void)disableAllDetectors;
@end

