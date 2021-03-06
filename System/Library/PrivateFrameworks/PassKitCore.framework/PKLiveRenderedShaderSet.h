/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKLiveRenderedShaderSet : NSObject <NSSecureCoding> {

	NSString* _geometryEntryPointShader;
	NSString* _surfaceEntryPointShader;
	NSString* _lightingModelEntryPointShader;
	NSString* _fragmentEntryPointShader;

}

@property (nonatomic,copy,readonly) NSString * geometryEntryPointShader;                   //@synthesize geometryEntryPointShader=_geometryEntryPointShader - In the implementation block
@property (nonatomic,copy,readonly) NSString * surfaceEntryPointShader;                    //@synthesize surfaceEntryPointShader=_surfaceEntryPointShader - In the implementation block
@property (nonatomic,copy,readonly) NSString * lightingModelEntryPointShader;              //@synthesize lightingModelEntryPointShader=_lightingModelEntryPointShader - In the implementation block
@property (nonatomic,copy,readonly) NSString * fragmentEntryPointShader;                   //@synthesize fragmentEntryPointShader=_fragmentEntryPointShader - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDataAccessor:(id)arg1 suffix:(id)arg2 ;
-(NSString *)geometryEntryPointShader;
-(NSString *)surfaceEntryPointShader;
-(NSString *)lightingModelEntryPointShader;
-(NSString *)fragmentEntryPointShader;
@end

