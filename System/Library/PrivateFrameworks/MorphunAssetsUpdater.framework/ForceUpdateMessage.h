/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MorphunAssetsUpdater.framework/MorphunAssetsUpdater
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/Message.h>

@protocol OS_xpc_object;
@class NSObject;

@interface ForceUpdateMessage : NSObject <Message> {

	NSObject*<OS_xpc_object> message;

}

@property (readonly) NSObject*<OS_xpc_object> message; 
-(int)type;
-(NSObject*<OS_xpc_object>)message;
-(id)init:(id)arg1 removeLanguages:(id)arg2 ;
@end

