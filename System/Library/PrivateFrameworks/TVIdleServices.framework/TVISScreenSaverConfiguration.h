/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TVISScreenSaver;
@class TVISRetailDemoScreenSaver;

@interface TVISScreenSaverConfiguration : NSObject <NSSecureCoding> {

	id<TVISScreenSaver> _activeScreenSaver;
	TVISRetailDemoScreenSaver* _retailDemoScreenSaver;

}

@property (nonatomic,readonly) id<TVISScreenSaver> activeScreenSaver;                          //@synthesize activeScreenSaver=_activeScreenSaver - In the implementation block
@property (nonatomic,readonly) TVISRetailDemoScreenSaver * retailDemoScreenSaver;              //@synthesize retailDemoScreenSaver=_retailDemoScreenSaver - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TVISRetailDemoScreenSaver *)retailDemoScreenSaver;
-(id<TVISScreenSaver>)activeScreenSaver;
@end

