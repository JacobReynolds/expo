// Copyright © 2018 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <ABI35_0_0UMCore/ABI35_0_0UMDefines.h>
#import <ABI35_0_0UMCore/ABI35_0_0UMInternalModule.h>

// Register a subclass of this class in ABI35_0_0UMModuleRegistryProvider
// to export an instance of this module to client code.
// Check documentation of the adapter appropriate to your platform
// to find out how to access constants and methods exported by the modules.

@interface ABI35_0_0UMExportedModule : NSObject <ABI35_0_0UMInternalModule, NSCopying>

- (NSDictionary *)constantsToExport;
+ (const NSString *)exportedModuleName;
- (NSDictionary<NSString *, NSString *> *)getExportedMethods;
- (void)callExportedMethod:(NSString *)methodName withArguments:(NSArray *)arguments resolver:(ABI35_0_0UMPromiseResolveBlock)resolver rejecter:(ABI35_0_0UMPromiseRejectBlock)rejecter;

- (dispatch_queue_t)methodQueue;

@end
