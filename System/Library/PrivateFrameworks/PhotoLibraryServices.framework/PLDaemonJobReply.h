/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface PLDaemonJobReply : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _xpcReply;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcReply;              //@synthesize xpcReply=_xpcReply - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithReply:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcReply;
@end

