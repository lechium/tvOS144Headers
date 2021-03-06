/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CAFenceHandle : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _handle_name;
	unsigned long long _fence_name;
	unsigned _port;
	Mutex _invalidation_mutex;
	SpinLock _lock;
	BOOL _invalidated;

}

@property (readonly) unsigned long long _name; 
@property (getter=isUsable,readonly) BOOL usable; 
@property (getter=isInvalidated,readonly) BOOL invalidated; 
+(BOOL)supportsSecureCoding;
+(id)handleFromXPCRepresentation:(id)arg1 ;
+(id)newFenceFromDefaultServer;
+(id)_newFenceFromServer:(unsigned)arg1 isObservable:(BOOL)arg2 ;
+(id)newFenceFromServer:(unsigned)arg1 ;
+(id)handleForPort:(unsigned)arg1 fenceId:(unsigned long long)arg2 ;
+(id)_newFenceWithPort:(unsigned)arg1 name:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(unsigned long long)_name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isInvalidated;
-(BOOL)isUsable;
-(id)createXPCRepresentation;
-(void)accessMachPort:(/*^block*/id)arg1 ;
-(id)_initWithPort:(unsigned)arg1 name:(unsigned long long)arg2 ;
-(id)_initWithXPCRepresentation:(id)arg1 ;
-(unsigned)_copyUntrackedPort;
-(unsigned long long)fenceId;
-(unsigned)copyPort;
-(unsigned)_copyPort;
-(void)_accessMachPort:(/*^block*/id)arg1 ;
@end

