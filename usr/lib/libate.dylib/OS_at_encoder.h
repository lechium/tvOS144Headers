/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libate.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libdispatch.dylib/OS_object.h>
#import <libobjc.A.dylib/OS_at_encoder.h>

@protocol OS_at_encoder <NSObject>
@end


@class NSString;

@interface OS_at_encoder : OS_object <OS_at_encoder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copy;
-(NSString *)debugDescription;
-(void)dealloc;
@end

