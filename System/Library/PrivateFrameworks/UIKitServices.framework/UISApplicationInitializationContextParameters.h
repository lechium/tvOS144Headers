/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSArray, NSString;

@interface UISApplicationInitializationContextParameters : NSObject <BSXPCCoding> {

	unsigned long long _supportedInterfaceOrientations;
	NSArray* _deviceFamilies;
	BOOL _requiresFullScreen;
	BOOL _supportsMultiwindow;

}

@property (assign,nonatomic) unsigned long long supportedInterfaceOrientations;              //@synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations - In the implementation block
@property (nonatomic,copy) NSArray * deviceFamilies;                                         //@synthesize deviceFamilies=_deviceFamilies - In the implementation block
@property (assign,nonatomic) BOOL requiresFullScreen;                                        //@synthesize requiresFullScreen=_requiresFullScreen - In the implementation block
@property (assign,nonatomic) BOOL supportsMultiwindow;                                       //@synthesize supportsMultiwindow=_supportsMultiwindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSArray *)deviceFamilies;
-(BOOL)supportsMultiwindow;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(void)setSupportsMultiwindow:(BOOL)arg1 ;
-(void)setDeviceFamilies:(NSArray *)arg1 ;
-(BOOL)requiresFullScreen;
-(void)setRequiresFullScreen:(BOOL)arg1 ;
@end

