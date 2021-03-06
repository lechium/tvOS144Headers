/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSMachPortSendRight.h>

@class BSAuditToken;

@interface BSMachPortTaskNameRight : BSMachPortSendRight {

	BSAuditToken* _critical_auditToken;
	int _pid;

}

@property (nonatomic,readonly) int pid;                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) BSAuditToken * auditToken; 
+(BOOL)supportsSecureCoding;
+(id)taskNameForPID:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BSAuditToken *)auditToken;
-(int)pid;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithPID:(int)arg1 ;
@end

