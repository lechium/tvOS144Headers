/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class NSSet, NSString;

@interface RBSInheritanceChangeSet : NSObject <RBSXPCSecureCoding> {

	NSSet* _gainedInheritances;
	NSSet* _lostInheritances;

}

@property (nonatomic,copy,readonly) NSSet * gainedInheritances;              //@synthesize gainedInheritances=_gainedInheritances - In the implementation block
@property (nonatomic,copy,readonly) NSSet * lostInheritances;                //@synthesize lostInheritances=_lostInheritances - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithGainedInheritances:(id)arg1 lostInheritances:(id)arg2 ;
-(NSSet *)gainedInheritances;
-(NSSet *)lostInheritances;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
@end

