/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GEOTransitShieldDataSource.h>

@class NSString;

@interface MKTransitShield : NSObject <GEOTransitShieldDataSource> {

	long long _shieldType;
	NSString* _shieldText;
	NSString* _shieldColorString;

}

@property (nonatomic,readonly) long long shieldType;                      //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,readonly) NSString * shieldText;                     //@synthesize shieldText=_shieldText - In the implementation block
@property (nonatomic,readonly) NSString * shieldColorString;              //@synthesize shieldColorString=_shieldColorString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)shieldType;
-(NSString *)shieldText;
-(NSString *)shieldColorString;
-(id)initWithShieldType:(long long)arg1 text:(id)arg2 color:(id)arg3 ;
@end

