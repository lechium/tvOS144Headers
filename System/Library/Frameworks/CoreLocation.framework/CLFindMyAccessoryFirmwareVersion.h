/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreLocation/CoreLocation-Structs.h>
@class NSString;

@interface CLFindMyAccessoryFirmwareVersion : NSObject {

	SCD_Struct_CL28* _version;

}

@property (readonly) NSString * vanBurenVersion; 
@property (readonly) NSString * rtKitVersion; 
@property (readonly) NSString * specificationVersion; 
@property (readonly) unsigned long long roseAPVersion; 
@property (readonly) unsigned long long roseDSPVersion; 
@property (readonly) unsigned long long hardwareVersion; 
@property (readonly) unsigned long long calibrationDataVersion; 
-(id)description;
-(void)dealloc;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)hardwareVersion;
-(NSString *)vanBurenVersion;
-(NSString *)rtKitVersion;
-(NSString *)specificationVersion;
-(unsigned long long)roseAPVersion;
-(unsigned long long)roseDSPVersion;
-(unsigned long long)calibrationDataVersion;
@end

