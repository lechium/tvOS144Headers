/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWFilterRendererParameters.h>

@class NSArray, CIFilter, NSString;

@interface BWCoreImageFilterRendererParameters : NSObject <BWFilterRendererParameters> {

	NSArray* _filters;
	CIFilter* _originalOutputFilter;
	BOOL _requiresFaceLandmarks;
	BOOL _requiresDepthMap;

}

@property (nonatomic,copy) NSArray * filters;                                    //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) CIFilter * originalOutputFilter;                    //@synthesize originalOutputFilter=_originalOutputFilter - In the implementation block
@property (nonatomic,readonly) BOOL requiresDepthMap;                            //@synthesize requiresDepthMap=_requiresDepthMap - In the implementation block
@property (nonatomic,readonly) BOOL requiresFaceLandmarks;                       //@synthesize requiresFaceLandmarks=_requiresFaceLandmarks - In the implementation block
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) float interpolationFractionComplete; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)containsFilterRequiringFaceLandmarks:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(short)type;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(float)interpolationFractionComplete;
-(int)prepareForRenderingWithInputVideoFormat:(id)arg1 ;
-(void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3 ;
-(BOOL)shouldInterpolateFromParameters:(id)arg1 toParameters:(id)arg2 ;
-(void)_ensureResourceRequirementsForFilters:(id)arg1 outputRequiresFaceLandmarks:(BOOL*)arg2 outputRequiresDepthMap:(BOOL*)arg3 ;
-(id)initWithFilters:(id)arg1 originalOutputFilter:(id)arg2 ;
-(int)depthTypeForFilter:(id)arg1 ;
-(CIFilter *)originalOutputFilter;
-(void)setOriginalOutputFilter:(CIFilter *)arg1 ;
-(BOOL)requiresFaceLandmarks;
-(BOOL)requiresDepthMap;
@end

