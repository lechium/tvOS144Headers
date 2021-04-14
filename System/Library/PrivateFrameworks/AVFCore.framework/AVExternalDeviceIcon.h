/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVExternalDeviceIconInternal, NSData;

@interface AVExternalDeviceIcon : NSObject {

	AVExternalDeviceIconInternal* _externalDeviceIcon;

}

@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) NSData * imageData; 
@property (getter=isPrerendered,nonatomic,readonly) BOOL prerendered; 
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(CGSize)pixelSize;
-(NSData *)imageData;
-(BOOL)isPrerendered;
@end

