/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INImage.h>

@class NSString, INImageBundle;

@interface _INBundleImage : INImage {

	NSString* _imageName;
	INImageBundle* _imageBundle;

}

@property (nonatomic,copy) NSString * imageName;                     //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) INImageBundle * imageBundle;              //@synthesize imageBundle=_imageBundle - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_identifier;
-(id)_bundleIdentifier;
-(id)_bundlePath;
-(id)stringRepresentation;
-(void)_setName:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(BOOL)_requiresRetrieval;
-(id)_copyWithSubclass:(Class)arg1 ;
-(void)_setBundlePath:(id)arg1 ;
-(id)_initWithURLRepresentation:(id)arg1 ;
-(BOOL)_isSystem;
-(void)_setBundleIdentifier:(id)arg1 ;
-(id)_URLRepresentation;
-(void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithStringRepresentation:(id)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(INImageBundle *)imageBundle;
-(void)setImageBundle:(INImageBundle *)arg1 ;
@end

