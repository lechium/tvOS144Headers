/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <InstallCoordination/IXOwnedDataPromise.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IXPromisedInMemoryDataSeed;

@interface IXPromisedInMemoryData : IXOwnedDataPromise <NSSecureCoding>

@property (nonatomic,retain) IXPromisedInMemoryDataSeed * seed; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(void)resetWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 data:(id)arg3 ;
-(Class)seedClass;
@end

